// 00543e30 expires_at

/* craggemini_core[66f3c71560d70857]::license::expires_at */

void __rustcall
craggemini_core[66f3c71560d70857]::license::expires_at(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_5c;
  undefined1 local_50 [16];
  int local_40;
  uint local_3c;
  uint local_38;
  
  uVar5 = param_2 % 0x15180;
  uVar6 = param_2 + 0x15180 + (param_2 / 0x15180) * -0x15180;
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5;
  }
  if (0xfffffffeffffffff < (((longlong)uVar5 >> 0x3f) + param_2 / 0x15180) - 0x7ff506c5U) {
    iVar2 = (*(code *)PTR_from_num_days_from_ce_opt_00799d08)();
    if (iVar2 != 0) {
      (*(code *)PTR_overflowing_add_offset_007999f8)(uVar6 >> 8 & 0xffffff,0);
      (*(code *)PTR_checked_add_months_00799a08)();
      if (local_5c != 0) {
        <chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::utc::Utc>>
        ::and_then::
        <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>,<chrono[1cd233408897ab2f]::offset::utc::Utc_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::_closure_0_>
                  (&local_40,0,local_50);
        if ((local_40 == 0) && (local_3c != 0)) {
          iVar4 = (int)local_3c >> 0xd;
          iVar2 = iVar4 + -1;
          iVar3 = 0;
          if (iVar4 < 1) {
            iVar3 = (1U - iVar4) / 400 + 1;
            iVar2 = iVar2 + iVar3 * 400;
            iVar3 = iVar3 * -0x23ab1;
          }
          *(ulonglong *)(param_1 + 8) =
               (longlong)
               (int)((((local_3c >> 4 & 0x1ff) + iVar3) - iVar2 / 100) + (iVar2 * 0x5b5 >> 2) +
                     (iVar2 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_38;
          uVar1 = 0;
          goto LAB_00543f43;
        }
      }
    }
  }
  param_1[1] = 3;
  uVar1 = 1;
LAB_00543f43:
  *param_1 = uVar1;
  return;
}


