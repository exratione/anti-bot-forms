<?php

/**
 * Admin settings form.
 */
function anti_bot_forms_settings() {
  $form['anti_bot_forms_name_salt'] = array(
    '#type' => 'textfield',
    '#title' => t('Name Salt'),
    '#description' => t('Used in hashing names to determine the correct hidden passcode for a form,'),
    '#default_value' => variable_get('anti_bot_forms_name_salt', 'this is a bad salt - change it'),
  );

  $form['anti_bot_forms_value_salt'] = array(
    '#type' => 'textfield',
    '#title' => t('Value Salt'),
    '#description' => t('Used in hashing values to determine the correct hidden passcode for a form,'),
    '#default_value' => variable_get('anti_bot_forms_value_salt', 'this is also a bad salt - change it'),
  );

  $form['anti_bot_forms_error_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Excluded Form IDs'),
    '#description' => t('Enter a comma-delimited list of form IDs. These forms will not be altered by this module.'),
    '#default_value' => variable_get('anti_bot_forms_error_message', 'Blocked by Anti-Bot Forms: you must enable Javascript in your browser to successfully submit this form.'),
  );

  $form['anti_bot_forms_excluded_form_ids'] = array(
    '#type' => 'textfield',
    '#title' => t('Excluded Form IDs'),
    '#description' => t('Enter a comma-delimited list of form IDs. These forms will not be altered by this module.'),
    '#default_value' => variable_get('anti_bot_forms_excluded_form_ids', ''),
  );

  return system_settings_form($form);
}
