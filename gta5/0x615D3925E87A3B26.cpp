// fm_capture_creator.ysc @ L52267
void func_683(int* iParam0, int iParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  int iVar4;
  int iVar5;
  
  if (*uParam2 != 0)
  {
    GRAPHICS::DELETE_CHECKPOINT(*uParam2);
    *uParam2 = 0;
  }
  HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &uVar3);
  if (!func_3585(Global_4456448.f_567))
  {
    func_3310(iParam0, Global_4456448.f_567, iParam1, "FMMC_B_4", 1f, 0, 0, -1);
    iVar4 = func_684();
    if (iVar4 != -1)
    {
      HUD::SET_BLIP_SPRITE(*iParam0, iVar4);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "FMMC_B_4");
    }
    iVar5 = 53;
    *uParam2 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Global_4456448.f_567, Global_4456448.f_567, 4f, iVar0, iVar1, iVar2, 255, 0);
    GRAPHICS::_0x615D3925E87A3B26(*uParam2);
  }
}