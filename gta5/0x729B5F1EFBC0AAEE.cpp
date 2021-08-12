// fm_content_island_dj.ysc @ L161961
void func_2798(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (HUD::DOES_BLIP_EXIST(uLocal_2780[iParam0]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3123.f_438[iParam0 /*3*/]))
  {
    HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(uLocal_2780[iParam0]), &iVar0, &iVar1, &iVar2, &uVar3);
    func_1571(NETWORK::NET_TO_ENT(Local_3123.f_438[iParam0 /*3*/]), iVar0, iVar1, iVar2, func_2799(iParam0), 0, 0);
  }
}