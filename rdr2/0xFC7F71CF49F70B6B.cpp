// marston7.ysc @ L55005
void func_1363()
{
  if (func_426(Global_35, 0) && func_426(iLocal_110, 0))
  {
    if (func_1225(iLocal_110, iLocal_118, 0))
    {
      if (!func_1762(iLocal_110, 1199744105))
      {
        if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_118) == iLocal_110 && func_1225(Global_35, iLocal_118, 0))
        {
          if (func_1763(iLocal_118, 5))
          {
            VEHICLE::_0x27E3F2B57209FA54(iLocal_118, 1);
            TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_110, iLocal_118, func_1236(sLocal_57), 12.5f, 69730435, 1, 5f, 2.5f, 0);
          }
          else
          {
            TASK::_0xFC7F71CF49F70B6B(Global_35);
          }
        }
      }
      else if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_118) != iLocal_110 || !func_1225(Global_35, iLocal_118, 0))
      {
        VEHICLE::_0x27E3F2B57209FA54(iLocal_118, 0);
        TASK::CLEAR_PED_TASKS(iLocal_110, true, false);
      }
    }
  }
}