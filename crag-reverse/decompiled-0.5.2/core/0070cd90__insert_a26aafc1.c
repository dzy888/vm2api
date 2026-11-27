// 0070cd90 insert

/* <signal_hook_registry[9dd8ecc3788bb260]::vec_map::VecMap<signal_hook_registry[9dd8ecc3788bb260]::ActionId,
   alloc[12e961f32105355]::sync::Arc<dyn for<'a> core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a
   libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),
   Output = ()> + core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync>>>::insert */

undefined8 __rustcall
<signal_hook_registry[9dd8ecc3788bb260]::vec_map::VecMap<signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<'a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>>
::insert(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar8 = param_1[1];
  uVar4 = param_1[2];
  lVar10 = uVar4 * 0x20;
  uVar7 = 0xffffffffffffffff;
  lVar9 = 0;
  do {
    if (lVar10 == lVar9) {
      if (uVar4 == *param_1) {
        (*(code *)PTR_grow_one_0079aa28)(uVar8,param_3,param_5,lVar9,param_4,param_5);
        uVar8 = param_1[1];
      }
      puVar3 = (undefined8 *)(uVar8 + 0x10 + lVar10);
      *puVar3 = param_4;
      puVar3[1] = param_5;
      *(longlong *)(uVar8 + lVar10) = param_2;
      ((longlong *)(uVar8 + lVar10))[1] = param_3;
      param_1[2] = uVar4 + 1;
      return 0;
    }
    plVar1 = (longlong *)(uVar8 + lVar9);
    plVar2 = (longlong *)(uVar8 + 8 + lVar9);
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + 0x20;
  } while (*plVar2 != param_3 || *plVar1 != param_2);
  if (uVar4 <= uVar7) {
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar8,&PTR_s__vendor_signal_hook_registry_1_4_007957a0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar5 = *(undefined8 *)((uVar8 - 0x10) + lVar9);
  *(undefined8 *)((uVar8 - 0x10) + lVar9) = param_4;
  *(undefined8 *)((uVar8 - 8) + lVar9) = param_5;
  return uVar5;
}


