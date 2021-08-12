// mob4.ysc @ L68037
void func_1835(int iParam0, float fParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    OBJECT::_0xF49574E2332A8F06(iParam0, fParam1);
    GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(iParam0);
  }
}