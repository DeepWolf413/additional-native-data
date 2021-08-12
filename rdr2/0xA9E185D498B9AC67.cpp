// beat_arms_deal.ysc @ L9306
bool func_273()
{
  if (ENTITY::IS_ENTITY_DEAD(iLocal_34))
  {
    return false;
  }
  if (func_28(1024) && (iLocal_1274 == 7 || iLocal_1274 == 10))
  {
    if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
    {
      if (!func_158(&uLocal_920))
      {
        func_163(&uLocal_920);
      }
      else if (func_377(&uLocal_920))
      {
        func_491(&uLocal_920);
      }
      else if (func_159(&uLocal_920) > 6f)
      {
        func_31(67108864);
        return true;
      }
    }
    else if (func_158(&uLocal_920) && !func_377(&uLocal_920))
    {
      func_492(&uLocal_920);
    }
  }
  return false;
}