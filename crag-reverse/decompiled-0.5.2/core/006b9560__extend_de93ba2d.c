// 006b9560 extend

/* hyper[c4782d5b5c5e3493]::common::date::extend */

void __rustcall hyper[c4782d5b5c5e3493]::common::date::extend(longlong *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *in_FS_OFFSET;
  
  lVar3 = *in_FS_OFFSET;
  puVar1 = (ulonglong *)(lVar3 + -0xa0);
  if (*(char *)(lVar3 + -0x60) == '\0') {
    <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>,!>>
    ::get_or_init_slow::<hyper[c4782d5b5c5e3493]::common::date::CACHED::__rust_std_internal_init_fn>
              (puVar1,0);
    uVar8 = *puVar1;
    if (0x7ffffffffffffffe < uVar8) goto LAB_006b95f1;
LAB_006b9595:
    *puVar1 = uVar8 + 1;
    lVar9 = param_1[2];
    if (0x1c < (ulonglong)(*param_1 - lVar9)) goto LAB_006b95ab;
  }
  else {
    uVar8 = *puVar1;
    if (uVar8 < 0x7fffffffffffffff) goto LAB_006b9595;
LAB_006b95f1:
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(param_1);
  lVar9 = param_1[2];
LAB_006b95ab:
  lVar4 = param_1[1];
  uVar5 = *(undefined8 *)(lVar3 + -0x80);
  uVar6 = *(undefined8 *)(lVar3 + -0x78);
  uVar7 = *(undefined8 *)(lVar3 + -0x6b);
  puVar2 = (undefined8 *)(lVar4 + 0xd + lVar9);
  *puVar2 = *(undefined8 *)(lVar3 + -0x73);
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(lVar4 + lVar9);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  param_1[2] = lVar9 + 0x1d;
  *puVar1 = *puVar1 - 1;
  return;
}


