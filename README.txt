Copy and paste the folloing code, to download and enable the required modules 
using Drush.

# Download modules.
drush dl flag-6.x-2.x-dev rules cck features content_profile ubercart  
drush dl context-6.x-3.0-alpha2 ctools strongarm-6.x-2.0-beta3

# Enable modules
drush gizra_access
