// 00621b90 error_response

/* craggemini_core[66f3c71560d70857]::server::error_response */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::server::error_response
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  multiprotocol::render_error_response(param_1,"",param_2);
  if ((*param_2 != -1) && (*param_2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_2[3] != -1) && (param_2[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
            (param_2[6]);
  return param_1;
}


