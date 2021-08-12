// am_mp_auto_shop.ysc @ L143998
void func_1179()
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_343.f_450.f_56))
  {
    if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(Local_343.f_450.f_56))
    {
      HUD::RELEASE_NAMED_RENDERTARGET(Local_343.f_450.f_56);
    }
  }
  if (Local_343.f_450.f_2 > -1)
  {
    NETWORK::NETWORK_CLAN_RELEASE_EMBLEM(Local_343.f_450.f_2);
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_343.f_450.f_4)))
  {
    GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&(Local_343.f_450.f_4));
  }
  Local_343.f_450.f_2 = -1;
  Local_343.f_450.f_3 = -1;
  Local_343.f_450 = 0;
  Local_343.f_450.f_55 = 0;
  StringCopy(&(Local_343.f_450.f_4), "", 64);
}