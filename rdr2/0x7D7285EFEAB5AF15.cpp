// fussar1.ysc @ L39964
bool func_931(char[4] cParam0)
{
  switch (iLocal_193)
  {
    case 0:
      STREAMING::REQUEST_MODEL(joaat("S_INTERACT_TORCH"), false);
      func_1492("Torch", &iLocal_193, 1);
    case 1:
      if (STREAMING::HAS_MODEL_LOADED(joaat("S_INTERACT_TORCH")))
      {
        if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1157))
        {
          iLocal_1157 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_MELEE_TORCH"), 1, 1533.08f, -7151.42f, 63.04f, true, 1f);
          if (ENTITY::DOES_ENTITY_EXIST(iLocal_1157))
          {
            func_428(cParam0, iLocal_1157, "s_interact_torch^1", 0, 0, 0, 0);
            OBJECT::_0xF49574E2332A8F06(iLocal_1157, 0f);
            OBJECT::_SET_OBJECT_BURN_OPACITY(iLocal_1157, 0f);
            ENTITY::_0x56E0735D6273B227(iLocal_1157, 1);
          }
          return false;
        }
        func_1492("Torch", &iLocal_193, 2);
      }
      break;
    case 2:
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_INTERACT_TORCH"));
      func_1492("Torch", &iLocal_193, 3);
    case 3:
      return true;
  }
  return false;
}