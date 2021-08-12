// rcm_here_kitty_kitty5.ysc @ L7189
void func_285(var uParam0)
{
  if (!bLocal_146)
  {
    if (func_555(uParam0, iLocal_49, "Handler", 0, 1, 1))
    {
      func_556(&iLocal_49, &(Local_84[2 /*6*/].f_5), -1, 1);
      TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_49, Local_84[2 /*6*/].f_5, 1495.76f, -347.2721f, 80.97009f, 6f, 67633283, 6, 5f, 2f, 0);
      bLocal_146 = true;
      func_202(&uLocal_150);
    }
  }
  if (!bLocal_145)
  {
    if (func_555(uParam0, iLocal_48, "RingMaster", 0, 1, 1))
    {
      func_556(&iLocal_48, &(Local_84[0 /*6*/].f_5), -1, 1);
      TASK::TASK_VEHICLE_ESCORT(iLocal_48, Local_84[0 /*6*/].f_5, Local_84[2 /*6*/].f_5, 3, 6f, 67633283, -1f, 20, 20f);
      func_154(&iLocal_113, 1, 0, 1);
      func_154(&iLocal_114, 1, 0, 1);
      func_154(&iLocal_115, 1, 0, 1);
      func_154(&iLocal_116, 1, 0, 1);
      bLocal_145 = true;
    }
  }
  if (!bLocal_144)
  {
    if (func_555(uParam0, Global_35, 0, 0, 1, 1))
    {
      bLocal_144 = true;
    }
  }
}