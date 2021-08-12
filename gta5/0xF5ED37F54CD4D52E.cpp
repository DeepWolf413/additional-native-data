// am_cp_collection.ysc @ L9574
void func_178()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Local_806.f_709)
  {
    if (HUD::DOES_BLIP_EXIST(Local_378[iVar0 /*3*/]))
    {
      HUD::REMOVE_BLIP(&(Local_378[iVar0 /*3*/]));
      GRAPHICS::DELETE_CHECKPOINT(Local_378[iVar0 /*3*/].f_1);
    }
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < 4)
  {
    iLocal_364[iVar0] = 0;
    iVar0++;
  }
}