// completionpercentage_controller.ysc @ L30449
void func_150()
{
  if (!MISC::IS_BIT_SET(Global_112293.f_10192.f_3856, 15))
  {
    if (STATS::_0x5EAD2BF6484852E4())
    {
      MISC::SET_BIT(&(Global_112293.f_10192.f_3856), 15);
      STATS::_UPDATE_STAT_INT(joaat("sp_vehicle_models_driven"), 200, 0);
    }
  }
}