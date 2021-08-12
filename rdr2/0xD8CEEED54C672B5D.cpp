// mudtown3b.ysc @ L90583
void func_2784(var uParam0, int iParam1, int iParam2)
{
  if (func_943(*uParam0, 0) && ENTITY::DOES_ENTITY_EXIST(Local_1966[uParam0->f_17 /*39*/]))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam1))
    {
      PED::_0xD8CEEED54C672B5D(*uParam0, iParam1, vLocal_2319, iParam2, 0);
    }
    else
    {
      PED::_0xD8CEEED54C672B5D(*uParam0, *uParam0, 0f, 0.75f, 0f, iParam2, 0);
    }
  }
}