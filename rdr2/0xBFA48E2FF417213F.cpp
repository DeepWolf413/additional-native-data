// homeinvasion.ysc @ L34697
bool func_776()
{
  switch (iLocal_126)
  {
    case 0:
      if (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-398.7585f, 1735.918f, 215.4435f, 1f, joaat("P_CHAIR20X"), false) && !ENTITY::DOES_ENTITY_EXIST(Local_268.f_2295[6]))
      {
        func_1055(&(Local_268.f_2295[6]), joaat("P_CHAIR02X"), -398.7585f, 1735.918f, 215.4435f, 12.01f, 1, 0, 0);
        return false;
      }
      else if (!func_980(&(Local_268.f_2295[6]), joaat("P_CHAIR02X"), &(Local_268.f_5338[1]), -398.7585f, 1735.918f, 215.4435f, 4, 0))
      {
        return false;
      }
      if (!ENTITY::IS_ENTITY_DEAD(Local_268.f_2295[6]))
      {
        func_2156(31);
      }
      return false;
    default:
      break;
  }
  func_2152();
  return true;
}