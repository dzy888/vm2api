// 005f8b70 <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>,<chrono[1cd233408897ab2f]::offset::utc::Utc_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::{closure#0}>

/* <chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::utc::Utc>>::and_then::<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>,
   <chrono[1cd233408897ab2f]::offset::utc::Utc as
   chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::{closure#0}> */

uint * __rustcall
<chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
and_then::
<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>,<chrono[1cd233408897ab2f]::offset::utc::Utc_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::_closure_0_>
          (uint *param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint local_34;
  undefined8 local_30;
  
  puVar1 = PTR_checked_sub_offset_00799f88;
  if (param_2 == 0) {
    uVar2 = 0;
    (*(code *)PTR_checked_sub_offset_00799f88)(param_4,0);
    if (local_34 != 0) {
      param_1[1] = local_34;
      *(undefined8 *)(param_1 + 2) = local_30;
      goto LAB_005f8c4b;
    }
  }
  else {
    uVar2 = (uint)param_2;
    if (param_2 != 1) goto LAB_005f8c4b;
    (*(code *)PTR_checked_sub_offset_00799f88)(param_4,0);
    (*(code *)puVar1)();
    if ((local_34 != 0) && (local_34 != 0)) {
      param_1[1] = local_34;
      *(undefined8 *)(param_1 + 2) = local_30;
      param_1[4] = local_34;
      *(undefined8 *)(param_1 + 5) = local_30;
      uVar2 = 1;
      goto LAB_005f8c4b;
    }
  }
  uVar2 = 2;
LAB_005f8c4b:
  *param_1 = uVar2;
  return param_1;
}


