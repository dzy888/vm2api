// 00621c20 error_response_for

/* craggemini_core[66f3c71560d70857]::server::error_response_for */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::server::error_response_for
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  multiprotocol::render_error_response();
  if ((*param_3 != -1) && (*param_3 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_3[3] != -1) && (param_3[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
            (param_3[6]);
  return param_1;
}


