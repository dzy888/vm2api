// 001fae10 write_all

/* <std[6c98fd8553dbae28]::io::stdio::StdoutLock as std[6c98fd8553dbae28]::io::Write>::write_all */

longlong __rustcall
<std[6c98fd8553dbae28]::io::stdio::StdoutLock_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    (*(code *)PTR_panic_already_borrowed_0021a620)();
LAB_001faf84:
    (*(code *)PTR_panic_fmt_0021a010)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  uVar5 = param_3;
  lVar3 = (*(code *)PTR_memrchr_0021ab78)();
  if (lVar3 == 1) {
    uVar5 = uVar5 + 1;
    if (param_3 < uVar5) goto LAB_001faf84;
    lVar3 = *(longlong *)(lVar1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stdout_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(param_2,uVar5);
      if ((lVar3 != 0) &&
         (((uVar4 = (uint)lVar3 & 3, uVar4 < 2 || (uVar4 != 2)) ||
          ((int)((ulonglong)lVar3 >> 0x20) != 9)))) goto LAB_001faf64;
    }
    else {
      if (uVar5 < (ulonglong)(*(longlong *)(lVar1 + 0x18) - lVar3)) {
        (*(code *)PTR_memcpy_00219c60)();
        *(ulonglong *)(lVar1 + 0x28) = lVar3 + uVar5;
      }
      else {
        lVar3 = (*(code *)PTR_write_all_cold_0021aa08)();
        if (lVar3 != 0) goto LAB_001faf64;
      }
      lVar3 = <std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
              ::flush_buf(lVar1 + 0x18,param_2);
      if (lVar3 != 0) goto LAB_001faf64;
    }
    lVar3 = *(longlong *)(lVar1 + 0x28);
    if ((ulonglong)(*(longlong *)(lVar1 + 0x18) - lVar3) <= param_3 - uVar5) {
LAB_001fafc3:
      lVar3 = (*(code *)PTR_write_all_cold_0021aa08)();
      goto LAB_001faf64;
    }
    (*(code *)PTR_memcpy_00219c60)();
    *(ulonglong *)(lVar1 + 0x28) = lVar3 + (param_3 - uVar5);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else if (*(char *)(*(longlong *)(lVar1 + 0x20) + -1 + lVar3) == '\n') {
      lVar3 = <std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
              ::flush_buf((longlong *)(lVar1 + 0x18));
      if (lVar3 != 0) goto LAB_001faf64;
      lVar3 = *(longlong *)(lVar1 + 0x28);
    }
    if ((ulonglong)(*(longlong *)(lVar1 + 0x18) - lVar3) <= param_3) goto LAB_001fafc3;
    (*(code *)PTR_memcpy_00219c60)();
    *(ulonglong *)(lVar1 + 0x28) = lVar3 + param_3;
  }
  lVar3 = 0;
LAB_001faf64:
  *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
  return lVar3;
}


