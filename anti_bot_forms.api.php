<?php

/**
 * @file
 * Hook descriptions.
 */

/**
 * @defgroup anti_bot_forms_hooks Hooks defined by the Anti-Bot Forms module
 * @{
 */

/**
 * Provide the names of functions that can protect forms.
 *
 * Only one of the provided functions is selected for a given rendering of
 * a given form. The function should have the same signature as for
 * hook_form_alter(&$form, $form_state, $form_id).
 *
 * @return array
 *   An array of function names.
 */
function hook_anti_bot_forms_functions() {
  return array(
    'anti_bot_forms_generic',
  );
}

/**
 * Alter the available functions for form protection.
 *
 * @param array $functions
 *   An array of function names.
 */
function hook_anti_bot_forms_functions_alter(&$functions) {

}

/**
 * @}
 */
