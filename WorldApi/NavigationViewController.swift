//
//  NavigationViewController.swift
//  CostumerView
//
//  Created by Yannick Klose on 23.09.17.
//  Copyright © 2017 Yannick Klose. All rights reserved.
//

import Foundation
import UIKit
import MapKit
import DocuSignSDK

class NavigationViewController: UIViewController {
    
    @IBOutlet weak var mapView: MKMapView!
    @IBOutlet weak var facetimeButton: UIButton!
    @IBOutlet weak var signButton: UIButton!

    private func facetime(phoneNumber:String) {
        if let facetimeURL:NSURL = NSURL(string: "facetime://\(phoneNumber)") {
            let application:UIApplication = UIApplication.shared
            if (application.canOpenURL(facetimeURL as URL)) {
                application.openURL(facetimeURL as URL)
            }
        }
    }
    
    override func viewDidLoad() {
        let annotation = MKPointAnnotation()
        annotation.coordinate = CLLocationCoordinate2D(latitude: 37.12, longitude: -121.14)
        mapView.addAnnotation(annotation)
    }
    
    @IBAction func sign(_ sender: Any) {
        DSMManager .login(withUserId: "lenopix@gmail.com"    , password: "asdfasdf123", integratorKey: "f06c1d79-7d6f-4ecc-9b57-2259c585bd53"
        , host: URL(string: "https://demo.docusign.net/restapi")) { (_) in
            let manager = DSMTemplatesManager()
            manager.presentSendTemplateControllerWithTemplate(withId: "221d2fc0-8394-4e35-8639-9de7c34e82c8", tabValueDefaults: ["":""], pdfToInsert: NSData() as Data!, insertAtPosition: DSMDocumentInsertAtPosition.beginning
                , signingMode: DSMSigningMode.online, presenting: self, animated: true, completion: nil)
        }
    }

    @IBAction func facetime(_ sender: Any) {
        facetime(phoneNumber: "+14088215303") //Ralfs phone number
    }
    
}
