// 00062d20 fmt

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
    lVar2 = *(longlong *)PTR_LOWER_CHARS_000c3dd0;
    uVar4 = *(ulonglong *)(PTR_LOWER_CHARS_000c3dd0 + 8);
    uVar8 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar8);
      uVar5 = (ulonglong)(bVar1 >> 4);
      if (uVar4 <= uVar5) goto LAB_00062e18;
      if (uVar8 == 0x20) goto LAB_00062dee;
      *(undefined1 *)((longlong)&local_48 + uVar8 * 2) = *(undefined1 *)(lVar2 + uVar5);
      uVar5 = (ulonglong)(bVar1 & 0xf);
      if (uVar4 <= uVar5) goto LAB_00062e05;
      *(undefined1 *)((longlong)&local_48 + uVar8 * 2 + 1) = *(undefined1 *)(lVar2 + uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    if (0x40 < (uint)uVar6) {
      uVar9 = (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&PTR_s__vendor_generic_array_0_14_7_src_000c0408,0x40);
LAB_00062dee:
      uVar9 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                        (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_000c03c0);
LAB_00062e05:
      uVar9 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                        (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_000c03d8);
LAB_00062e18:
      (*(code *)PTR_panic_bounds_check_000c3dd8)
                (uVar9,&PTR_s__vendor_generic_array_0_14_7_src_000c03a8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)PTR_write_str_000c3d28)();
  return;
}


