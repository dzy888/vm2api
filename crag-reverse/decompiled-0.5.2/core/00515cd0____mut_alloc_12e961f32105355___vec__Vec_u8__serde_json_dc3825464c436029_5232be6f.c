// 00515cd0 <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>

/* serde_json[dc3825464c436029]::ser::format_escaped_str::<&mut
   alloc[12e961f32105355]::vec::Vec<u8>, serde_json[dc3825464c436029]::ser::CompactFormatter> */

undefined8 __rustcall
serde_json[dc3825464c436029]::ser::format_escaped_str::
<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
          (longlong *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  param_1 = (longlong *)*param_1;
  lVar8 = param_1[2];
  if (*param_1 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,1,1,1);
    lVar8 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + lVar8) = 0x22;
  lVar8 = lVar8 + 1;
  param_1[2] = lVar8;
  puVar5 = PTR_HEX_DIGITS_00799c80;
  puVar6 = PTR_ESCAPE_00799c78;
  do {
    lVar7 = 1;
    do {
      if (param_4 + lVar7 == 1) {
        if (param_4 != 0) {
          if ((ulonglong)(*param_1 - lVar8) < param_4) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,param_4,1,1);
            lVar8 = param_1[2];
          }
          (*(code *)PTR_memcpy_00799008)();
          lVar8 = lVar8 + param_4;
          param_1[2] = lVar8;
        }
        if (*param_1 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,1,1,1);
          lVar8 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + lVar8) = 0x22;
        param_1[2] = lVar8 + 1;
        return 0;
      }
      bVar1 = *param_3;
      cVar2 = puVar6[bVar1];
      param_3 = param_3 + 1;
      lVar7 = lVar7 + -1;
    } while (cVar2 == '\0');
    if (lVar7 != 0) {
      if ((ulonglong)(*param_1 - lVar8) <= (ulonglong)-lVar7 && -(*param_1 - lVar8) != lVar7) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,-lVar7,1,1);
        lVar8 = param_1[2];
      }
      (*(code *)PTR_memcpy_00799008)();
      lVar8 = lVar8 - lVar7;
      param_1[2] = lVar8;
      puVar5 = PTR_HEX_DIGITS_00799c80;
      puVar6 = PTR_ESCAPE_00799c78;
    }
    param_4 = (param_4 + lVar7) - 1;
    if (cVar2 == 'u') {
      uVar3 = puVar5[bVar1 >> 4];
      uVar4 = puVar5[bVar1 & 0xf];
      if ((ulonglong)(*param_1 - lVar8) < 6) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,6,1,1);
        lVar8 = param_1[2];
        puVar5 = PTR_HEX_DIGITS_00799c80;
      }
      lVar7 = param_1[1];
      *(undefined4 *)(lVar7 + lVar8) = 0x3030755c;
      *(undefined1 *)(lVar7 + 4 + lVar8) = uVar3;
      *(undefined1 *)(lVar7 + 5 + lVar8) = uVar4;
      lVar8 = lVar8 + 6;
    }
    else {
      if ((ulonglong)(*param_1 - lVar8) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar8,2,1,1);
        lVar8 = param_1[2];
      }
      lVar7 = param_1[1];
      *(undefined1 *)(lVar7 + lVar8) = 0x5c;
      *(char *)(lVar7 + 1 + lVar8) = cVar2;
      lVar8 = lVar8 + 2;
    }
    param_1[2] = lVar8;
  } while( true );
}


