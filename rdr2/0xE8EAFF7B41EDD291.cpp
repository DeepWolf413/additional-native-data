// property_use_core.ysc @ L58727
void func_2026(struct<9> Param0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
  int iVar0;
  int iVar1;

  iVar0 = Param0.f_8;
  if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
  {
    iVar1 = func_1493(iVar0, 0);
    if (!AUDIO::_0x6DF942C4179BE5AB(iVar1, joaat("HUD_SHOP_SOUNDSET")))
    {
      AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
    }
    else
    {
      AUDIO::_0xE8EAFF7B41EDD291(iVar1, joaat("HUD_SHOP_SOUNDSET"), 0);
    }
  }
  else
  {
    AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
  }
}