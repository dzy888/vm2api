// 0054eed0 end

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::end */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::end(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 != '\0') {
    return;
  }
  if (param_1[1] == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar2 = (longlong *)*plVar1;
  lVar5 = plVar1[3] + -1;
  plVar1[3] = lVar5;
  if ((char)plVar1[4] == '\0') {
    lVar6 = plVar2[2];
LAB_0054ef9b:
    if (*plVar2 != lVar6) goto LAB_0054efa0;
  }
  else {
    lVar6 = plVar2[2];
    if (*plVar2 == lVar6) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
      lVar6 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar6) = 10;
    lVar6 = lVar6 + 1;
    plVar2[2] = lVar6;
    puVar4 = PTR_memcpy_00799008;
    if (lVar5 == 0) goto LAB_0054ef9b;
    uVar3 = plVar1[2];
    if (uVar3 != 0) {
      do {
        if ((ulonglong)(*plVar2 - lVar6) < uVar3) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,uVar3,1,1);
          lVar6 = plVar2[2];
        }
        (*(code *)puVar4)();
        lVar6 = lVar6 + uVar3;
        plVar2[2] = lVar6;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      goto LAB_0054ef9b;
    }
    plVar2[2] = lVar6;
    if (*plVar2 != lVar6) goto LAB_0054efa0;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
  lVar6 = plVar2[2];
LAB_0054efa0:
  *(undefined1 *)(plVar2[1] + lVar6) = 0x7d;
  plVar2[2] = lVar6 + 1;
  return;
}


