// map_app_event_handler.ysc @ L1985
int func_60(int iParam0)
{
  if (!func_38(iParam0))
  {
    if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
    {
      return "FMMC_INV_ALID";
    }
    return "REGION_INV";
  }
  return func_97(Global_1888801[iParam0 /*35*/].f_22);
}