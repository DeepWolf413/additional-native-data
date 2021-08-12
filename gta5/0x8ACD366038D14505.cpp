// fm_mission_controller_2020.ysc @ L431061
void func_7111(bool bParam0, int iParam1)
{
  int iVar0;
  
  if (func_4639())
  {
    iVar0 = 0;
    while (iVar0 <= 31)
    {
      if (Local_42692.f_334[iVar0] == ENTITY::GET_ENTITY_TYPE(iParam1))
      {
        if (Local_42692.f_367[iVar0] == bParam0)
        {
          if (HUD::DOES_BLIP_EXIST(iLocal_23517[iVar0]))
          {
            HUD::REMOVE_BLIP(&(iLocal_23517[iVar0]));
          }
        }
      }
      iVar0++;
    }
    func_4631(4, bParam0);
  }
}