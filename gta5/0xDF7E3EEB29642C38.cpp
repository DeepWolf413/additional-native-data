// armenian2.ysc @ L67933
void func_609()
{
  bool bVar0;
  var uVar1;
  var uVar4;
  
  if (func_607())
  {
    if (!func_610(func_612(), 13f, 30f, 20f, 1))
    {
      bVar0 = true;
    }
  }
  if (bVar0)
  {
    func_620(&(Local_1450[0 /*2*/]), -1149.331f, -1587.637f, 3.4344f, 305f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145, 1);
  }
  else
  {
    func_620(&(Local_1450[0 /*2*/]), -1133.479f, -1574.017f, 3.3788f, 300f, 0, 0, 1, 0, 1, joaat("asterope"), 0, 145, 1);
  }
  VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(Local_1450[0 /*2*/], &uVar1, &uVar4);
}