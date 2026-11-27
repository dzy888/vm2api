// 003c8e80 <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(),Output=core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>>

/* WARNING: Switch with 1 destination removed at 0x003c8ea8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(), Output =
   core[c0acaeba6ab4c2e0]::result::Result<(), core[c0acaeba6ab4c2e0]::io::error::Error>> +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(),Output_core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


