// fm_maintain_transition_players.ysc @ L39152
void func_313()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 <= (Global_4718592.f_61824 - 1))
  {
    if (!func_345(Global_4718592.f_61833[iVar0 /*150*/]))
    {
      iVar1 = func_314(iVar0, -1, -1);
      HUD::_RACE_GALLERY_NEXT_BLIP_SPRITE(iVar1);
      HUD::_RACE_GALLERY_ADD_BLIP(Global_4718592.f_61833[iVar0 /*150*/]);
    }
    iVar0++;
  }
}