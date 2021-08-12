// rcm_here_kitty_kitty4.ysc @ L10392
bool func_324(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
  {
    return true;
  }
  STREAMING::REQUEST_MODEL(iLocal_259, false);
  if (STREAMING::HAS_MODEL_LOADED(iLocal_259))
  {
    iLocal_329 = func_584(uParam0, iLocal_259, vLocal_698, 299.7664f, 1, 1, 0, 1, 1, 1, 1, 0);
    if (func_204(iLocal_329, 1))
    {
      func_736();
      func_737();
      TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_329, true);
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_329, false);
      ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_329, true, 0f);
      PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_329);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_329, true);
      PED::SET_PED_CONFIG_FLAG(iLocal_329, 263, true);
      PED::SET_PED_CONFIG_FLAG(iLocal_329, 138, false);
      PED::SET_PED_CONFIG_FLAG(iLocal_329, 277, true);
      ENTITY::SET_ENTITY_PROOFS(iLocal_329, 1, false);
      func_738(iLocal_329);
      PED::SET_PED_CONFIG_FLAG(iLocal_329, 186, false);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
      PED::APPLY_PED_DAMAGE_PACK(iLocal_329, "PD_RC_Here_Kitty4_Lion_Bloody_Mouth_Paws", 0f, 1f);
      iLocal_158 = 0;
      return true;
    }
  }
  return false;
}