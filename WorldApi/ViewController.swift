//
//  ViewController.swift
//  test
//
//  Created by doMore on 9/23/17.
//  Copyright © 2017 doMore. All rights reserved.
//

import UIKit
import HyperTrack

class ViewController: UIViewController {
    @IBOutlet weak var facebookbutton: UIButton!
    @IBOutlet weak var loginButton: UIButton!
    @IBOutlet weak var twitterButton: UIButton!
    @IBOutlet weak var Header: UILabel!
    @IBOutlet weak var userName: UITextField!

    override func viewDidLoad() {
        super.viewDidLoad()
        facebookbutton.backgroundColor = UIColor(red: 0.278, green: 0.408, blue: 0.678, alpha: 1.00)
        twitterButton.backgroundColor = UIColor(red: 0.271, green: 0.627, blue: 0.922, alpha: 1.00)
        loginButton.backgroundColor = UIColor(red: 0.137, green: 0.290, blue: 0.604, alpha: 1.00)
        loginButton.layer.cornerRadius = 10
        facebookbutton.layer.cornerRadius = 10
        facebookbutton.clipsToBounds = true
        twitterButton.layer.cornerRadius = 10
        twitterButton.clipsToBounds = true
        loginButton.clipsToBounds = true
        Header.text = "Doorstep"

        // Do any additional setup after loading the view, typically from a nib.
    }
    @IBAction func loginTapped(_ sender: Any) {
        if let user = userName.text
        {
            HyperTrack.setUserId(user)
            performSegue(withIdentifier: "toCustomer", sender: self)
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

