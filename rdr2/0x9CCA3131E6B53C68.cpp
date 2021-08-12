// train_robbery4.ysc @ L62268
bool func_1327(char[4] cParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_3526))
  {
    if (STREAMING::HAS_MODEL_LOADED(Local_3526.f_2))
    {
      Local_3526.f_8 = { -0.0355f, -3.7f, 3.911f };
      func_1841(&Local_3526, Local_7547[Local_3526.f_5 /*14*/], 1, 0, 0);
      func_150(cParam0, Local_3526, "u_m_m_armytrn4_01", 0, 0, 0, 0);
    }
  }
  else if (PED::_0xA0BC8FAED8CFEB3C(Local_3526) && WEAPON::_0x9CCA3131E6B53C68(Local_3526, joaat("WEAPON_REPEATER_WINCHESTER"), 1073741824 /* Float: 2f */))
  {
    return true;
  }
  return false;
}