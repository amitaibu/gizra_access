# Download modules.
drush dl flag rules cck features content_profile ubercart ctools strongarm context-6.x-3.0-alpha2

# Enable modules
drush en -y flag rules_admin features text nodereference content_permissions php ca uc_cart uc_order uc_product uc_store content_profile ctools strongarm context_ui
