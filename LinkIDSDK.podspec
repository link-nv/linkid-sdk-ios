Pod::Spec.new do |s|
  s.name         = "LinkIDSDK"
  s.version      = "1.0.4"
  s.summary      = "linkID SDK integration library."
  s.homepage     = "https://www.linkid.be"
  s.license      = { :type => 'LGPL v3', :file => 'LICENSE' }
  s.author       = { "Wim Vandenhaute" => "wim.vandenhaute@gmail.com" }
  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/link-nv/linkid-sdk-ios.git", :tag => "1.0.4" }
 
  s.ios.deployment_target = '7.0'
  s.ios.source_files  = 'linkid-sdk-ios/linkid-sdk-ios/*.{h,m}'
  s.ios.frameworks  = 'Security', 'MobileCoreServices', 'SystemConfiguration'
  s.ios.resources = ["linkid-sdk-ios/linkid-sdk-ios/*.png"]

  s.requires_arc = true

  s.ios.dependency 'AFNetworking',   '2.5.2'

end