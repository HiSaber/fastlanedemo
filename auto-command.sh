project_path=$(cd `dirname $0`; pwd)
project_name="${project_path##*/}"
echo $project_path
echo $project_name
bundleId="com.supwisdon.fast"
#icon
cp -r $project_path/GeneratedFile/AppIcon.appiconset $project_path/FastlaneTest/Assets.xcassets

#launchImg
#cp $project_path/GeneratedFile/LaunchImage.launchimage $project_path/SWSuperApp/SWSuperApp/Resouece/Assets.xcassets

#cp $project_path/GeneratedFile/config.plist $project_path/SWSuperApp/SWSuperApp/SuportFile

#cp $project_path/GeneratedFile/YGConfigDefine.h $project_path/SWSuperApp/SWSuperApp/SuportFile

if [ $? -eq 0 ];then
cd $project_path
sed -i '' "s/PRODUCT_BUNDLE_IDENTIFIER = .*;/PRODUCT_BUNDLE_IDENTIFIER = $bundleId;/;" $project_path/FastlaneTest.xcodeproj/project.pbxproj

fastlane deploy
else printf '移动失败'
    exit
fi
