// fm_mission_controller.ysc @ L701134
void func_11704()
{
  if (CAM::DOES_CAM_EXIST(Global_2518589))
  {
    if (CAM::IS_CAM_ACTIVE(Global_2518589))
    {
      if (func_10487())
      {
        if (func_586(Global_4456448.f_133963) || func_3283(Global_4456448.f_133963))
        {
          if (OBJECT::_GET_PICKUP_GENERATION_RANGE_MULTIPLIER() < 20f)
          {
            OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(20f);
          }
        }
        else if (OBJECT::_GET_PICKUP_GENERATION_RANGE_MULTIPLIER() < 4f)
        {
          OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(4f);
        }
        OBJECT::_0x394CD08E31313C28();
      }
    }
  }
}