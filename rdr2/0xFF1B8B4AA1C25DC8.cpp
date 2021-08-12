// abigail2_1.ysc @ L68262
void func_1917(var uParam0)
{
  if (func_845(uParam0->f_3, 3))
  {
    switch (uParam0->f_1)
    {
      case 2:
        TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
        break;
      case 1:
        VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
        break;
    }
  }
  uParam0->f_3 = 0;
}