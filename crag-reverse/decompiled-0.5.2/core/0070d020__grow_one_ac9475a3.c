// 0070d020 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,
   alloc[12e961f32105355]::sync::Arc<dyn for<'a> core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a
   libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),
   Output = ()> + core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync>)>>::grow_one */

undefined8 __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<'a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>>
::grow_one(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized(param_1,*param_1,0x10,0x20)
  ;
  if (lVar2 == -1) {
    return in_RAX;
  }
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


