Pod::Spec.new do |s|
  s.name             = 'CCMiniSDK'
  s.version          = '1.0.0123.01'
  s.summary          = 'A comprehensive iOS SDK integrating Firebase and Apple services'
  s.description      = <<-DESC
    CCMiniSDK is a modular iOS SDK that provides easy integration with:
    - Firebase (Analytics, Auth, Messaging, Crashlytics, RemoteConfig, Performance)
    - Apple Services (Sign In with Apple, Push Notifications, Apple Pay, IAP, iCloud, Game Center)
    - Google Services (Google Sign-In, User Messaging Platform)
    - TopOn Ads (Banner, Interstitial, Rewarded Video, Native)
  DESC
  
  s.homepage         = 'https://github.com/Yoech/CCMiniSDK-iOS-Release'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'CCMiniSDK' => 'mowen@126.com' }
  s.source          = { :git => 'https://github.com/Yoech/CCMiniSDK-iOS-Release.git', :tag => '1.0.0123.01' }
  
  s.ios.deployment_target = '15.0'
  s.swift_version = '5.0'
  s.requires_arc = true
  s.static_framework = false
  s.public_header_files = 'CCMiniSDK/CCMiniSDK/Classes/**/*.h'
  
  # xcframework
s.vendored_frameworks = "CCMiniSDK.xcframework"

  # source
# s.source_files = 'CCMiniSDK/Classes/**/*'
  
  s.frameworks = [
    'Foundation',
    'UIKit',
    'Security',
    'LocalAuthentication',
    'StoreKit',
    'GameKit',
    'CloudKit',
    'AuthenticationServices',
    'PassKit',
    'UserNotifications'
  ]
  
  # Firebase
  s.dependency 'Firebase/Analytics','12.8.0'
  s.dependency 'Firebase/Auth','12.8.0'
  s.dependency 'Firebase/Messaging','12.8.0'
  s.dependency 'Firebase/Crashlytics','12.8.0'
  s.dependency 'Firebase/RemoteConfig','12.8.0'
  s.dependency 'Firebase/Performance','12.8.0'
  
  # Google
  s.dependency 'GoogleSignIn'
  s.dependency 'GoogleUserMessagingPlatform'
  
  # TopOn
  s.dependency 'TPNiOS', '6.5.41'
  #TPN Adx SDK(necessary)
  s.dependency 'TPNMediationAdxSmartdigimktAdapter','6.5.42.1'
  s.dependency 'TPNMediationUnityAdsAdapter','4.16.4.0'
  s.dependency 'TPNMediationIronSourceAdapter','9.2.0.0.0'
  s.dependency 'TPNMediationPangleAdapter','7.8.0.6.0'
  s.dependency 'TPNMediationFacebookAdapter','6.21.0.0'
  s.dependency 'TPNMediationAdmobAdapter','12.14.0.0'
  s.dependency 'TPNMediationApplovinAdapter','13.5.0.1'
  s.dependency 'TPNMediationMintegralAdapter','7.7.9.0'
end
