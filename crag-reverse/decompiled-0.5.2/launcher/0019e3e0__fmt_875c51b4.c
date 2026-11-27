// 0019e3e0 fmt

/* <generic_array[23c79d86a8b0a962]::GenericArray<u8,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>> as
   core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt */

void __rustcall
<generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
::fmt(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar6 = 0x40;
  if ((*(uint *)(param_2 + 0x10) & 0x10000000) != 0) {
    uVar6 = (ulonglong)*(ushort *)(param_2 + 0x16);
  }
  uVar4 = uVar6 - ((uint)uVar6 >> 1);
  uVar9 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar7 = 0x20;
  if (uVar4 < 0x20) {
    uVar7 = uVar4;
  }
  if (uVar6 != 0) {
    lVar2 = *(longlong *)PTR_LOWER_CHARS_0021a3a8;
    uVar4 = *(ulonglong *)(PTR_LOWER_CHARS_0021a3a8 + 8);
    uVar8 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar8);
      uVar5 = (ulonglong)(bVar1 >> 4);
      if (uVar4 <= uVar5) goto LAB_0019e4d8;
      if (uVar8 == 0x20) goto LAB_0019e4ae;
      *(undefined1 *)((longlong)&local_48 + uVar8 * 2) = *(undefined1 *)(lVar2 + uVar5);
      uVar5 = (ulonglong)(bVar1 & 0xf);
      if (uVar4 <= uVar5) goto LAB_0019e4c5;
      *(undefined1 *)((longlong)&local_48 + uVar8 * 2 + 1) = *(undefined1 *)(lVar2 + uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    if (0x40 < (uint)uVar6) {
      uVar9 = (*(code *)PTR_slice_index_fail_00219d80)
                        (&PTR_s__vendor_generic_array_0_14_7_src_00216720,0x40);
LAB_0019e4ae:
      uVar9 = (*(code *)PTR_panic_bounds_check_0021a020)
                        (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_002166f0);
LAB_0019e4c5:
      uVar9 = (*(code *)PTR_panic_bounds_check_0021a020)
                        (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_00216708);
LAB_0019e4d8:
      (*(code *)PTR_panic_bounds_check_0021a020)
                (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_002166d8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)PTR_write_str_00219e10)();
  return;
}


