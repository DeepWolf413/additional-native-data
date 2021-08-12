// braithwaites2.ysc @ L53120
void func_1294(var uParam0)
{
  if (!bLocal_723)
  {
    if (func_1806(uParam0))
    {
      func_905(0, 0);
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_14.f_19[0], 1701.58f, -1387.89f, 43.71f, 288.86f, false, true);
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
      bLocal_723 = true;
    }
  }
  else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_724, false))
  {
    if (((ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_724, false) && ANIMSCENE::_0x6F1F0B17109309DA(iLocal_724, "CAMERA")) && ANIMSCENE::_0x4822A65D5AF64E69(iLocal_724) > 0) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
    {
      func_1807();
      ANIMSCENE::_0x1AD896BF43619551();
    }
    else if (iLocal_722 == 1)
    {
      iLocal_722 = 0;
      HUD::_UIPROMPT_DELETE(iLocal_7452);
    }
  }
}