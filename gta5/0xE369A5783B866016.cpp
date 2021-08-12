// fm_mission_controller.ysc @ L879389
int func_14582()
{
  bool bVar0;
  
  MISC::DISABLE_STUNT_JUMP_SET(0);
  MISC::DISABLE_STUNT_JUMP_SET(1);
  bVar0 = false;
  while (bVar0 <= (Global_4456448.f_84322 - 1))
  {
    if (!func_402(Global_4456448.f_84323[bVar0 /*9*/]))
    {
      if (!func_402(Global_4456448.f_84323[bVar0 /*9*/].f_3))
      {
        if (!func_402(Global_4456448.f_84323[bVar0 /*9*/].f_6))
        {
          if (!MISC::IS_BIT_SET(iLocal_4932, bVar0))
          {
            iLocal_4921[bVar0] = MISC::ADD_STUNT_JUMP(func_14584(Global_4456448.f_84323[bVar0 /*9*/], 0), func_14584(Global_4456448.f_84323[bVar0 /*9*/], 1), func_14583(Global_4456448.f_84323[bVar0 /*9*/].f_3, 0), func_14583(Global_4456448.f_84323[bVar0 /*9*/].f_3, 1), Global_4456448.f_84323[bVar0 /*9*/].f_6, 1000, 2, 0);
            MISC::SET_BIT(&bLocal_4932, bVar0);
          }
        }
      }
    }
    bVar0++;
  }
  MISC::ENABLE_STUNT_JUMP_SET(2);
  return 1;
}