Pod::Spec.new do |s|
  s.name             = 'CCMiniSDK'
  s.version          = '1.0.0112.01'
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
  s.source          = { :git => 'https://github.com/Yoech/CCMiniSDK-iOS-Release.git', :tag => '1.0.0112.01' }
  
  s.ios.deployment_target = '15.0'
  s.swift_version = '5.0'
  s.requires_arc = true
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
  s.dependency 'FirebaseAnalytics'
  s.dependency 'FirebaseAuth'
  s.dependency 'FirebaseMessaging'
  s.dependency 'FirebaseCrashlytics'
  s.dependency 'FirebaseRemoteConfig'
  s.dependency 'FirebasePerformance'
  
  # Google
  s.dependency 'GoogleSignIn'
  s.dependency 'GoogleUserMessagingPlatform'
  
  # TopOn
  s.dependency 'TPNiOS', '6.5.33'
  #TPN Adx SDK(necessary)
  s.dependency 'TPNMediationAdxSmartdigimktAdapter','6.5.40.0'
  s.dependency 'TPNMediationUnityAdsAdapter','4.16.2.0'
  s.dependency 'TPNMediationPangleAdapter','7.7.0.4.0'
  s.dependency 'TPNMediationFacebookAdapter','6.21.0.0'
  s.dependency 'TPNMediationAdmobAdapter','12.12.0.0'
  s.dependency 'TPNMediationApplovinAdapter','13.5.0.0'
  s.dependency 'TPNMediationMintegralAdapter','7.7.9.0'
  
  s.static_framework = true
end
