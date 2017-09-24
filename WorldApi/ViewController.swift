//
//  ViewController.swift
//  WorldApi
//
//  Created by Jason Du on 9/23/17.
//  Copyright © 2017 Jason Du. All rights reserved.
//

import UIKit
import DocuSignSDK
import WebKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        DSMManager .login(withUserId: "lenopix@gmail.com"    , password: "asdfasdf123", integratorKey: "f06c1d79-7d6f-4ecc-9b57-2259c585bd53"
        , host: URL(string: "https://demo.docusign.net/restapi")) { (_) in
            let manager = DSMTemplatesManager()
            manager.presentSendTemplateControllerWithTemplate(withId: "221d2fc0-8394-4e35-8639-9de7c34e82c8", tabValueDefaults: ["":""], pdfToInsert: NSData() as Data!, insertAtPosition: DSMDocumentInsertAtPosition.beginning
            , signingMode: DSMSigningMode.online, presenting: self, animated: true, completion: nil)
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

