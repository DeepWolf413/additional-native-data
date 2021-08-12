// fm_bj_race_controler.ysc @ L565444
void func_9614(var uParam0, var uParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < uParam0->f_728)
  {
    if (iVar0 < 59)
    {
      if (OBJECT::DOES_PICKUP_EXIST(uParam1->f_4474[iVar0]))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(uParam1->f_4474[iVar0]))
        {
          OBJECT::REMOVE_PICKUP(uParam1->f_4474[iVar0]);
        }
      }
      if (HUD::DOES_BLIP_EXIST(uParam1->f_5325[iVar0]))
      {
        HUD::REMOVE_BLIP(&(uParam1->f_5325[iVar0]));
      }
    }
    iVar0++;
  }
}