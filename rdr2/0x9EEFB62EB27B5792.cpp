// abigail2_1.ysc @ L35274
void func_817(var uParam0)
{
  if (!func_845(uParam0->f_3, 1))
  {
    switch (uParam0->f_1)
    {
      case 2:
        TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
        break;
      case 1:
        VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
        break;
      default:
        break;
    }
    func_811(&(uParam0->f_3), 1);
  }
}