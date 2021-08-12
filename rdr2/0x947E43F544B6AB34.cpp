// av_macfarlane_farmer.ysc @ L1234
void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
  if (func_46())
  {
    uParam0->f_499 = 1;
    return;
  }
  if (!ENTITY::IS_ENTITY_DEAD(func_47(iLocal_38)) && PED::_0x947E43F544B6AB34(func_47(iLocal_38), PLAYER::PLAYER_ID(), 36, 600000))
  {
    uParam0->f_499 = 1;
    return;
  }
  switch (*uParam0)
  {
    case 48:
      func_48(uParam0, "AV_MACFARLANE_FARMER", "script@vignette@mcfarlane_farmer_1@ACTION", vParam1, vParam4);
      break;
  }
  func_49(uParam0, 0, "IG_GenStoryMale", joaat("CS_GENSTORYMALE"), 0f, 0f, 0f, 0f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
}