// fm_mission_controller.ysc @ L796985
void func_13471(int iParam0, bool bParam1, bool bParam2)
{
  float fVar0;
  
  if (func_1229(Global_4456448.f_85535))
  {
    if (MISC::IS_BIT_SET(Global_4718592.f_70989[bParam1 /*392*/].f_105, 2))
    {
      fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0);
      if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam2))
      {
        VEHICLE::_SET_PLANE_ENGINE_HEALTH(iParam0, fVar0);
      }
      else
      {
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, fVar0);
      }
    }
  }
}