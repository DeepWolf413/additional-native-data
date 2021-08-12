// am_mp_submarine.ysc @ L451809
void func_7044(var uParam0)
{
  StringCopy(&(uParam0->f_17), "mpsubmarine_periscope", 32);
  StringCopy(&(uParam0->f_17.f_8), "ScopeOverlay", 32);
  StringCopy(&(uParam0->f_17.f_16), "CrosshairLine", 32);
  StringCopy(&(uParam0->f_17.f_24), "Bars", 32);
  StringCopy(&(uParam0->f_17.f_32), "Numbers", 32);
  StringCopy(&(uParam0->f_17.f_40), "Target_Default", 32);
  StringCopy(&(uParam0->f_17.f_48), "Target_LockingOn", 32);
  StringCopy(&(uParam0->f_17.f_56), "Target_LockedOn", 32);
  GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(uParam0->f_17), false);
  if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(uParam0->f_17)))
  {
    uParam0->f_17.f_64 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_8)) };
    uParam0->f_17.f_67 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_16)) };
    uParam0->f_17.f_70 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_24)) };
    uParam0->f_17.f_73 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_32)) };
    uParam0->f_17.f_76 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_40)) };
    uParam0->f_17.f_79 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_48)) };
    uParam0->f_17.f_82 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&(uParam0->f_17), &(uParam0->f_17.f_56)) };
  }
}