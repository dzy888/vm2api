// 003b6ec0 next

/* WARNING: Type propagation algorithm not settling */
/* <core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 in_R8;
  longlong *unaff_R13;
  undefined1 auVar9 [16];
  longlong *local_78;
  longlong *local_70 [3];
  longlong local_58;
  undefined8 local_40;
  
  do {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 == *(undefined8 **)(param_1 + 0x18)) {
      plVar5 = (longlong *)0x0;
      break;
    }
    unaff_R13 = (longlong *)*puVar1;
    *(undefined8 **)(param_1 + 8) = puVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 0x28);
    local_78 = unaff_R13;
    if (unaff_R13[0x65] == 0) {
switchD_003b6f34_default:
      unaff_R13 = unaff_R13 + 2;
      <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::assert_calibrated
                (local_70,unaff_R13,*(undefined1 *)(lVar2 + 0x16b),0,in_R8,0);
      plVar5 = local_78;
      if (local_70[0] != (longlong *)0xfffffffffffffffe) {
        if ((local_70[0] != (longlong *)0xffffffffffffffff) && (local_70[0] != (longlong *)0x0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((local_58 != -1) && (local_58 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (local_40);
        goto LAB_003b6fcd;
      }
      local_70[0] = local_78;
      unaff_R13 = (longlong *)
                  <craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_pool
                            (*(undefined8 *)(param_1 + 0x30),local_78[0x1e],local_78[0x1f]);
      if (unaff_R13 == (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(local_70);
        }
        goto LAB_003b6fe2;
      }
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x20);
      uVar3 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::check
                        (unaff_R13[0x65] + 0x10);
      lVar4 = 0x4b;
      lVar6 = 0xf;
      switch(uVar3) {
      case 0:
        lVar6 = 0x10;
        puVar7 = anon_63b06cc94833867f683611f039574387_227_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_226_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 1:
        puVar7 = anon_63b06cc94833867f683611f039574387_229_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_228_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 2:
        lVar4 = 0x4c;
        lVar6 = 0x15;
        puVar7 = anon_63b06cc94833867f683611f039574387_231_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_230_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 3:
        lVar4 = 0x37;
        puVar7 = anon_63b06cc94833867f683611f039574387_233_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_232_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 4:
        lVar4 = 0x46;
        lVar6 = 0x18;
        puVar7 = anon_63b06cc94833867f683611f039574387_235_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_234_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 5:
        lVar4 = 0x48;
        lVar6 = 0x1c;
        puVar7 = anon_63b06cc94833867f683611f039574387_237_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_236_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      case 6:
        lVar4 = 99;
        lVar6 = 0x14;
        puVar7 = anon_63b06cc94833867f683611f039574387_239_llvm_6903579140370050947;
        puVar8 = anon_63b06cc94833867f683611f039574387_238_llvm_6903579140370050947;
        lVar2 = *plVar5;
        break;
      default:
        goto switchD_003b6f34_default;
      }
      if (lVar2 == -2) {
        *plVar5 = -1;
        plVar5[1] = (longlong)puVar8;
        plVar5[2] = lVar6;
        plVar5[3] = -1;
        plVar5[4] = (longlong)puVar7;
        plVar5[5] = lVar4;
        plVar5[6] = 0;
        *(undefined4 *)(plVar5 + 7) = 0x6020193;
        LOCK();
        *local_78 = *local_78 + -1;
        lVar2 = *local_78;
        UNLOCK();
      }
      else {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (0);
LAB_003b6fcd:
        LOCK();
        *local_78 = *local_78 + -1;
        lVar2 = *local_78;
        UNLOCK();
      }
      if (lVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(&local_78);
      }
LAB_003b6fe2:
      plVar5 = (longlong *)0x0;
    }
  } while (plVar5 == (longlong *)0x0);
  auVar9._8_8_ = unaff_R13;
  auVar9._0_8_ = plVar5;
  return auVar9;
}


