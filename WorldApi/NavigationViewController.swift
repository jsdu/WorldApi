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
import HyperTrack

class NavigationViewController: UIViewController {
    
    @IBOutlet weak var facetimeButton: UIButton!
    @IBOutlet weak var signButton: UIButton!
    var hyperTrackMap : HTMap? = nil

    private func facetime(phoneNumber:String) {
        if let facetimeURL:NSURL = NSURL(string: "facetime://\(phoneNumber)") {
            let application:UIApplication = UIApplication.shared
            if (application.canOpenURL(facetimeURL as URL)) {
                application.openURL(facetimeURL as URL)
            }
        }
    }
    
    override func viewDidLoad() {
        hyperTrackMap = HyperTrack.map()
        hyperTrackMap?.enableLiveLocationSharingView = true
        hyperTrackMap?.showConfirmLocationButton = true
        hyperTrackMap?.setHTViewInteractionDelegate(interactionDelegate: self)
        hyperTrackMap?.embedIn(self.view)
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

extension NavigationViewController:HTViewInteractionDelegate {


    func didSelectLocation(place : HyperTrackPlace?){

        //  Start a Live Location Trip : Step 2. This is the callback which gets called when the user select a location. Create an action and assign it.

    }


    func didTapBackButton(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
    }

    func didTapStopLiveLocationSharing(actionId : String){
        //This is the callback when user want to stop the trip. Complete the action

        HyperTrack.completeAction(actionId)
    }

    func didTapShareLiveLocationLink(action : HyperTrackAction){
        if let lookupId = action.lookupId {

            //  Start a Live Location Trip : Step 3 : This is the callback when the user wants to share his location to his friends. Create a activity view controller to share it through messenger apps

            let textToShare : Array = [lookupId]
            let activityViewController = UIActivityViewController(activityItems: textToShare, applicationActivities: nil)
            activityViewController.completionWithItemsHandler = { activityType, complete, returnedItems, error in
            }
            self.present(activityViewController, animated: false, completion: nil)

        }
    }

}

