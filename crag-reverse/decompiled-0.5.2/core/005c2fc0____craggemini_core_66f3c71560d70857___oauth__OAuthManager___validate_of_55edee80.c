// 005c2fc0 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::validate_official_auth_url::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::filter::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::validate_official_auth_url::{closure#0}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::filter::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::validate_official_auth_url::_closure_0_>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != -1) {
    if (param_2[2] - 1U < 0x200) {
      param_1[2] = param_2[2];
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      return;
    }
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_2[2] - 1U,1);
    }
  }
  *param_1 = -1;
  return;
}


